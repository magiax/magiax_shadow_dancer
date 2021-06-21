// Fill out your copyright notice in the Description page of Project Settings.


#include "WRTextFile.h"

bool UWRTextFile::LoadTxt(FString FileNameA, FString& SaveTextA)
{
    return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameSourceDir() + FileNameA));
}

bool UWRTextFile::SaveTxt(FString SaveTextB, FString FileNameB)
{
    return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameSourceDir() + FileNameB));
}
