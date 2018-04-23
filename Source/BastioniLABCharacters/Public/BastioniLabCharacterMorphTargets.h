#pragma once

#include "BastioniLabCharacterMorphTargets.generated.h"

UENUM(BlueprintType)
enum class EBastioniLabCharacterMorphTarget : uint8
{
	AbdomExpansionMax,
	AbdomExpansionMin,
	BrowOutVertLMax,
	BrowOutVertLMin,
	BrowOutVertRMax,
	BrowOutVertRMin,
	BrowSqueezeLMax,
	BrowSqueezeLMin,
	BrowSqueezeRMax,
	BrowSqueezeRMin,
	BrowsMidVertMax,
	BrowsMidVertMin,
	CheekSneerLMax,
	CheekSneerRMax,
	ChestExpansionMax,
	ChestExpansionMin,
	DeglutitionMax,
	DeglutitionMin,
	EyeClosedLMax,
	EyeClosedLMin,
	EyeClosedPressureLMax,
	EyeClosedPressureLMin,
	EyeClosedPressureRMax,
	EyeClosedPressureRMin,
	EyeClosedRMax,
	EyeClosedRMin,
	EyeSquintLMax,
	EyeSquintLMin,
	EyeSquintRMax,
	EyeSquintRMin,
	EyesHorizMax,
	EyesHorizMin,
	EyesVertMax,
	EyesVertMin,
	JawHorizMax,
	JawHorizMin,
	JawOutMax,
	JawOutMin,
	MouthBiteMax,
	MouthBiteMin,
	MouthChewMax,
	MouthChewMin,
	MouthClosedMax,
	MouthClosedMin,
	MouthHorizMax,
	MouthHorizMin,
	MouthInflatedMax,
	MouthInflatedMin,
	MouthLowerOutMax,
	MouthLowerOutMin,
	MouthOpenAggrMax,
	MouthOpenAggrMin,
	MouthOpenHalfMax,
	MouthOpenLargeMax,
	MouthOpenLargeMin,
	MouthOpenOMax,
	MouthOpenOMin,
	MouthOpenTeethClosedMax,
	MouthOpenTeethClosedMin,
	MouthOpenMax,
	MouthOpenMin,
	MouthSmileLMax,
	MouthSmileOpen2Max,
	MouthSmileOpen2Min,
	MouthSmileOpenMax,
	MouthSmileOpenMin,
	MouthSmileRMax,
	MouthSmileMax,
	MouthSmileMin,
	NostrilsExpansionMax,
	NostrilsExpansionMin,
	PupilsDilatationMax,
	PupilsDilatationMin,
	TongueHorizMax,
	TongueHorizMin,
	TongueOutPressureMax,
	TongueOutMax,
	TongueOutMin,
	TongueTipUpMax,
	TongueVertMax,
	TongueVertMin
};

static const FName BastioniLabCharacterMorphTargetNames[] = {
	FName("Expressions_abdomExpansion_max"),
	FName("Expressions_abdomExpansion_min"),
	FName("Expressions_browOutVertL_max"),
	FName("Expressions_browOutVertL_min"),
	FName("Expressions_browOutVertR_max"),
	FName("Expressions_browOutVertR_min"),
	FName("Expressions_browSqueezeL_max"),
	FName("Expressions_browSqueezeL_min"),
	FName("Expressions_browSqueezeR_max"),
	FName("Expressions_browSqueezeR_min"),
	FName("Expressions_browsMidVert_max"),
	FName("Expressions_browsMidVert_min"),
	FName("Expressions_cheekSneerL_max"),
	FName("Expressions_cheekSneerR_max"),
	FName("Expressions_chestExpansion_max"),
	FName("Expressions_chestExpansion_min"),
	FName("Expressions_deglutition_max"),
	FName("Expressions_deglutition_min"),
	FName("Expressions_eyeClosedL_max"),
	FName("Expressions_eyeClosedL_min"),
	FName("Expressions_eyeClosedPressureL_max"),
	FName("Expressions_eyeClosedPressureL_min"),
	FName("Expressions_eyeClosedPressureR_max"),
	FName("Expressions_eyeClosedPressureR_min"),
	FName("Expressions_eyeClosedR_max"),
	FName("Expressions_eyeClosedR_min"),
	FName("Expressions_eyeSquintL_max"),
	FName("Expressions_eyeSquintL_min"),
	FName("Expressions_eyeSquintR_max"),
	FName("Expressions_eyeSquintR_min"),
	FName("Expressions_eyesHoriz_max"),
	FName("Expressions_eyesHoriz_min"),
	FName("Expressions_eyesVert_max"),
	FName("Expressions_eyesVert_min"),
	FName("Expressions_jawHoriz_max"),
	FName("Expressions_jawHoriz_min"),
	FName("Expressions_jawOut_max"),
	FName("Expressions_jawOut_min"),
	FName("Expressions_mouthBite_max"),
	FName("Expressions_mouthBite_min"),
	FName("Expressions_mouthChew_max"),
	FName("Expressions_mouthChew_min"),
	FName("Expressions_mouthClosed_max"),
	FName("Expressions_mouthClosed_min"),
	FName("Expressions_mouthHoriz_max"),
	FName("Expressions_mouthHoriz_min"),
	FName("Expressions_mouthInflated_max"),
	FName("Expressions_mouthInflated_min"),
	FName("Expressions_mouthLowerOut_max"),
	FName("Expressions_mouthLowerOut_min"),
	FName("Expressions_mouthOpenAggr_max"),
	FName("Expressions_mouthOpenAggr_min"),
	FName("Expressions_mouthOpenHalf_max"),
	FName("Expressions_mouthOpenLarge_max"),
	FName("Expressions_mouthOpenLarge_min"),
	FName("Expressions_mouthOpenO_max"),
	FName("Expressions_mouthOpenO_min"),
	FName("Expressions_mouthOpenTeethClosed_max"),
	FName("Expressions_mouthOpenTeethClosed_min"),
	FName("Expressions_mouthOpen_max"),
	FName("Expressions_mouthOpen_min"),
	FName("Expressions_mouthSmileL_max"),
	FName("Expressions_mouthSmileOpen2_max"),
	FName("Expressions_mouthSmileOpen2_min"),
	FName("Expressions_mouthSmileOpen_max"),
	FName("Expressions_mouthSmileOpen_min"),
	FName("Expressions_mouthSmileR_max"),
	FName("Expressions_mouthSmile_max"),
	FName("Expressions_mouthSmile_min"),
	FName("Expressions_nostrilsExpansion_max"),
	FName("Expressions_nostrilsExpansion_min"),
	FName("Expressions_pupilsDilatation_max"),
	FName("Expressions_pupilsDilatation_min"),
	FName("Expressions_tongueHoriz_max"),
	FName("Expressions_tongueHoriz_min"),
	FName("Expressions_tongueOutPressure_max"),
	FName("Expressions_tongueOut_max"),
	FName("Expressions_tongueOut_min"),
	FName("Expressions_tongueTipUp_max"),
	FName("Expressions_tongueVert_max"),
	FName("Expressions_tongueVert_min")
};


struct FBastioniLabCharacterMorphTargetBuffer {

	TArray<float> AbdomExpansionMaxValuesBuffer;
	TArray<float> AbdomExpansionMinValuesBuffer;
	TArray<float> BrowOutVertLMaxValuesBuffer;
	TArray<float> BrowOutVertLMinValuesBuffer;
	TArray<float> BrowOutVertRMaxValuesBuffer;
	TArray<float> BrowOutVertRMinValuesBuffer;
	TArray<float> BrowSqueezeLMaxValuesBuffer;
	TArray<float> BrowSqueezeLMinValuesBuffer;
	TArray<float> BrowSqueezeRMaxValuesBuffer;
	TArray<float> BrowSqueezeRMinValuesBuffer;
	TArray<float> BrowsMidVertMaxValuesBuffer;
	TArray<float> BrowsMidVertMinValuesBuffer;
	TArray<float> CheekSneerLMaxValuesBuffer;
	TArray<float> CheekSneerRMaxValuesBuffer;
	TArray<float> ChestExpansionMaxValuesBuffer;
	TArray<float> ChestExpansionMinValuesBuffer;
	TArray<float> DeglutitionMaxValuesBuffer;
	TArray<float> DeglutitionMinValuesBuffer;
	TArray<float> EyeClosedLMaxValuesBuffer;
	TArray<float> EyeClosedLMinValuesBuffer;
	TArray<float> EyeClosedPressureLMaxValuesBuffer;
	TArray<float> EyeClosedPressureLMinValuesBuffer;
	TArray<float> EyeClosedPressureRMaxValuesBuffer;
	TArray<float> EyeClosedPressureRMinValuesBuffer;
	TArray<float> EyeClosedRMaxValuesBuffer;
	TArray<float> EyeClosedRMinValuesBuffer;
	TArray<float> EyeSquintLMaxValuesBuffer;
	TArray<float> EyeSquintLMinValuesBuffer;
	TArray<float> EyeSquintRMaxValuesBuffer;
	TArray<float> EyeSquintRMinValuesBuffer;
	TArray<float> EyesHorizMaxValuesBuffer;
	TArray<float> EyesHorizMinValuesBuffer;
	TArray<float> EyesVertMaxValuesBuffer;
	TArray<float> EyesVertMinValuesBuffer;
	TArray<float> JawHorizMaxValuesBuffer;
	TArray<float> JawHorizMinValuesBuffer;
	TArray<float> JawOutMaxValuesBuffer;
	TArray<float> JawOutMinValuesBuffer;
	TArray<float> MouthBiteMaxValuesBuffer;
	TArray<float> MouthBiteMinValuesBuffer;
	TArray<float> MouthChewMaxValuesBuffer;
	TArray<float> MouthChewMinValuesBuffer;
	TArray<float> MouthClosedMaxValuesBuffer;
	TArray<float> MouthClosedMinValuesBuffer;
	TArray<float> MouthHorizMaxValuesBuffer;
	TArray<float> MouthHorizMinValuesBuffer;
	TArray<float> MouthInflatedMaxValuesBuffer;
	TArray<float> MouthInflatedMinValuesBuffer;
	TArray<float> MouthLowerOutMaxValuesBuffer;
	TArray<float> MouthLowerOutMinValuesBuffer;
	TArray<float> MouthOpenAggrMaxValuesBuffer;
	TArray<float> MouthOpenAggrMinValuesBuffer;
	TArray<float> MouthOpenHalfMaxValuesBuffer;
	TArray<float> MouthOpenLargeMaxValuesBuffer;
	TArray<float> MouthOpenLargeMinValuesBuffer;
	TArray<float> MouthOpenOMaxValuesBuffer;
	TArray<float> MouthOpenOMinValuesBuffer;
	TArray<float> MouthOpenTeethClosedMaxValuesBuffer;
	TArray<float> MouthOpenTeethClosedMinValuesBuffer;
	TArray<float> MouthOpenMaxValuesBuffer;
	TArray<float> MouthOpenMinValuesBuffer;
	TArray<float> MouthSmileLMaxValuesBuffer;
	TArray<float> MouthSmileOpen2MaxValuesBuffer;
	TArray<float> MouthSmileOpen2MinValuesBuffer;
	TArray<float> MouthSmileOpenMaxValuesBuffer;
	TArray<float> MouthSmileOpenMinValuesBuffer;
	TArray<float> MouthSmileRMaxValuesBuffer;
	TArray<float> MouthSmileMaxValuesBuffer;
	TArray<float> MouthSmileMinValuesBuffer;
	TArray<float> NostrilsExpansionMaxValuesBuffer;
	TArray<float> NostrilsExpansionMinValuesBuffer;
	TArray<float> PupilsDilatationMaxValuesBuffer;
	TArray<float> PupilsDilatationMinValuesBuffer;
	TArray<float> TongueHorizMaxValuesBuffer;
	TArray<float> TongueHorizMinValuesBuffer;
	TArray<float> TongueOutPressureMaxValuesBuffer;
	TArray<float> TongueOutMaxValuesBuffer;
	TArray<float> TongueOutMinValuesBuffer;
	TArray<float> TongueTipUpMaxValuesBuffer;
	TArray<float> TongueVertMaxValuesBuffer;
	TArray<float> TongueVertMinValuesBuffer;


	TArray<TArray<float>> ValuesBufferList;

	FBastioniLabCharacterMorphTargetBuffer() {

		// cannot be initialised in class
		// small amount of overhead from doing this but simplifies other bits of programming
		ValuesBufferList = {
			AbdomExpansionMaxValuesBuffer,
			AbdomExpansionMinValuesBuffer,
			BrowOutVertLMaxValuesBuffer,
			BrowOutVertLMinValuesBuffer,
			BrowOutVertRMaxValuesBuffer,
			BrowOutVertRMinValuesBuffer,
			BrowSqueezeLMaxValuesBuffer,
			BrowSqueezeLMinValuesBuffer,
			BrowSqueezeRMaxValuesBuffer,
			BrowSqueezeRMinValuesBuffer,
			BrowsMidVertMaxValuesBuffer,
			BrowsMidVertMinValuesBuffer,
			CheekSneerLMaxValuesBuffer,
			CheekSneerRMaxValuesBuffer,
			ChestExpansionMaxValuesBuffer,
			ChestExpansionMinValuesBuffer,
			DeglutitionMaxValuesBuffer,
			DeglutitionMinValuesBuffer,
			EyeClosedLMaxValuesBuffer,
			EyeClosedLMinValuesBuffer,
			EyeClosedPressureLMaxValuesBuffer,
			EyeClosedPressureLMinValuesBuffer,
			EyeClosedPressureRMaxValuesBuffer,
			EyeClosedPressureRMinValuesBuffer,
			EyeClosedRMaxValuesBuffer,
			EyeClosedRMinValuesBuffer,
			EyeSquintLMaxValuesBuffer,
			EyeSquintLMinValuesBuffer,
			EyeSquintRMaxValuesBuffer,
			EyeSquintRMinValuesBuffer,
			EyesHorizMaxValuesBuffer,
			EyesHorizMinValuesBuffer,
			EyesVertMaxValuesBuffer,
			EyesVertMinValuesBuffer,
			JawHorizMaxValuesBuffer,
			JawHorizMinValuesBuffer,
			JawOutMaxValuesBuffer,
			JawOutMinValuesBuffer,
			MouthBiteMaxValuesBuffer,
			MouthBiteMinValuesBuffer,
			MouthChewMaxValuesBuffer,
			MouthChewMinValuesBuffer,
			MouthClosedMaxValuesBuffer,
			MouthClosedMinValuesBuffer,
			MouthHorizMaxValuesBuffer,
			MouthHorizMinValuesBuffer,
			MouthInflatedMaxValuesBuffer,
			MouthInflatedMinValuesBuffer,
			MouthLowerOutMaxValuesBuffer,
			MouthLowerOutMinValuesBuffer,
			MouthOpenAggrMaxValuesBuffer,
			MouthOpenAggrMinValuesBuffer,
			MouthOpenHalfMaxValuesBuffer,
			MouthOpenLargeMaxValuesBuffer,
			MouthOpenLargeMinValuesBuffer,
			MouthOpenOMaxValuesBuffer,
			MouthOpenOMinValuesBuffer,
			MouthOpenTeethClosedMaxValuesBuffer,
			MouthOpenTeethClosedMinValuesBuffer,
			MouthOpenMaxValuesBuffer,
			MouthOpenMinValuesBuffer,
			MouthSmileLMaxValuesBuffer,
			MouthSmileOpen2MaxValuesBuffer,
			MouthSmileOpen2MinValuesBuffer,
			MouthSmileOpenMaxValuesBuffer,
			MouthSmileOpenMinValuesBuffer,
			MouthSmileRMaxValuesBuffer,
			MouthSmileMaxValuesBuffer,
			MouthSmileMinValuesBuffer,
			NostrilsExpansionMaxValuesBuffer,
			NostrilsExpansionMinValuesBuffer,
			PupilsDilatationMaxValuesBuffer,
			PupilsDilatationMinValuesBuffer,
			TongueHorizMaxValuesBuffer,
			TongueHorizMinValuesBuffer,
			TongueOutPressureMaxValuesBuffer,
			TongueOutMaxValuesBuffer,
			TongueOutMinValuesBuffer,
			TongueTipUpMaxValuesBuffer,
			TongueVertMaxValuesBuffer,
			TongueVertMinValuesBuffer
		};
	};
};

USTRUCT(BlueprintType)
struct FBastioniLabCharacterMacroExpression
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TMap<EBastioniLabCharacterMorphTarget, float> MorphTargetExpressionValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Weight;

};

USTRUCT(BlueprintType)
struct FMorphRequest {

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName MorphName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MorphValue;
};


USTRUCT(BlueprintType)
struct FMorphRequestHandler {

	GENERATED_BODY()

public:

	TMap<FName, TArray<FMorphRequest>> CollectedMorphRequests;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bClampMorphTargetValues = true;

	void RequestMorph(FMorphRequest MorphRequest)
	{
		if (CollectedMorphRequests.Contains(MorphRequest.MorphName))
		{
			TArray<FMorphRequest> MorphRequests = CollectedMorphRequests[MorphRequest.MorphName];
			MorphRequests.Add(MorphRequest);
			CollectedMorphRequests[MorphRequest.MorphName] = MorphRequests;  // this actually shouldn't be necessary
		}
		else
		{
			TArray<FMorphRequest> MorphRequests;
			MorphRequests.Add(MorphRequest);
			CollectedMorphRequests.Add(MorphRequest.MorphName, MorphRequests);
		}
	}

	TMap<FName, float> ResolveRequestsToMorphValues()
	{
		TMap<FName, float> Result;
		for (TPair<FName, TArray<FMorphRequest>> KV : CollectedMorphRequests)
		{
			float MorphValue = 0.f;
			for (FMorphRequest MorphRequest : KV.Value)
			{
				MorphValue += MorphRequest.Weight * MorphRequest.MorphValue;
			}
			MorphValue /= KV.Value.Num();
			if (bClampMorphTargetValues)
			{
				MorphValue = FMath::Clamp(MorphValue, 0.f, 1.f);
			}
			Result.Add(KV.Key, MorphValue);
		}
		return Result;
	}

};
