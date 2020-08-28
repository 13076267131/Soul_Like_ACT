#include "BPFL/BPFL_Utilities.h"

void UBPFL_Utilities::GetRenderedActors(TArray<AActor*>& CurrentlyRenderedActors, float MinRecentTime/*= 0.01f*/)
{
    //Empty any previous entries
    CurrentlyRenderedActors.Empty();
     
    //Iterate Over Actors
    for ( TObjectIterator<AActor> Itr; Itr; ++Itr )
    {
        if (Itr->GetLastRenderTime() > MinRecentTime)
        {
            CurrentlyRenderedActors.Add( * Itr);
        }
    }
}

void UBPFL_Utilities::GetNotRenderedActors(TArray<AActor*>& CurrentlyNotRenderedActors, float MinRecentTime/*= 0.01f*/)
{
    //Empty any previous entries
    CurrentlyNotRenderedActors.Empty();
     
    //Iterate Over Actors
    for ( TObjectIterator<AActor> Itr; Itr; ++Itr )
    {
        if (Itr->GetLastRenderTime() <= MinRecentTime)
        {
            CurrentlyNotRenderedActors.Add( * Itr);
        }
    }
}
