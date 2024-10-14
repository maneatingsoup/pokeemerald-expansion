#include "global.h"
#include "play_time.h"

enum
{
    STOPPED,
    RUNNING,
    MAXED_OUT
};

static u8 sPlayTimeCounterState;

void PlayTimeCounter_Reset(void)
{
    sPlayTimeCounterState = STOPPED;

    gSaveBlock2Ptr->playTimeHours = 0;
    gSaveBlock2Ptr->playTimeMinutes = 0;
    gSaveBlock2Ptr->playTimeSeconds = 0;
    gSaveBlock2Ptr->playTimeVBlanks = 0;
}

void WeatherTimeCounter_Reset(void)
{
    sPlayTimeCounterState = STOPPED;

    gSaveBlock1Ptr->weatherTimeHours = 1;
    gSaveBlock1Ptr->weatherTimeMinutes = 0;
    gSaveBlock1Ptr->weatherTimeSeconds = 0;
}

void PlayTimeCounter_Start(void)
{
    sPlayTimeCounterState = RUNNING;

    if (gSaveBlock2Ptr->playTimeHours > 999)
        PlayTimeCounter_SetToMax();
    
    if (gSaveBlock1Ptr->weatherTimeHours > 999)
    WeatherTimeCounter_Reset();
}

void PlayTimeCounter_Stop(void)
{
    sPlayTimeCounterState = STOPPED;
}

void PlayTimeCounter_Update(void)
{
    if (sPlayTimeCounterState != RUNNING)
        return;

    gSaveBlock2Ptr->playTimeVBlanks++;

    if (gSaveBlock2Ptr->playTimeVBlanks < 60)
        return;

    gSaveBlock2Ptr->playTimeVBlanks = 0;
    gSaveBlock2Ptr->playTimeSeconds++;
    gSaveBlock1Ptr->weatherTimeSeconds++;

    if (gSaveBlock2Ptr->playTimeSeconds < 60)
        return;

    gSaveBlock2Ptr->playTimeSeconds = 0;
    gSaveBlock2Ptr->playTimeMinutes++;

    if (gSaveBlock2Ptr->playTimeMinutes < 60)
        return;

    gSaveBlock2Ptr->playTimeMinutes = 0;
    gSaveBlock2Ptr->playTimeHours++;

    if (gSaveBlock2Ptr->playTimeHours > 999)
        PlayTimeCounter_SetToMax();
}

void WeatherTimeCounter_Update(void)
{
    if (sPlayTimeCounterState != RUNNING)
        return;

    if (gSaveBlock1Ptr->weatherTimeSeconds < 60)
        return;

    gSaveBlock1Ptr->weatherTimeSeconds = 0;
    gSaveBlock1Ptr->weatherTimeMinutes++;

    if (gSaveBlock1Ptr->weatherTimeMinutes < 60)
        return;

    gSaveBlock1Ptr->weatherTimeMinutes = 0;
    gSaveBlock1Ptr->weatherTimeHours++;

    if (gSaveBlock1Ptr->weatherTimeHours > 999)
        WeatherTimeCounter_Reset();
}

void PlayTimeCounter_SetToMax(void)
{
    sPlayTimeCounterState = MAXED_OUT;

    gSaveBlock2Ptr->playTimeHours = 999;
    gSaveBlock2Ptr->playTimeMinutes = 59;
    gSaveBlock2Ptr->playTimeSeconds = 59;
    gSaveBlock2Ptr->playTimeVBlanks = 59;
}
