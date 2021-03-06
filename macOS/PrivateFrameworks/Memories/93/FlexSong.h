//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Memories/FlexSongBackend.h>

@class NSArray, NSDictionary, NSObject<FlexSongAssetProviderProtocol>, NSString;

@interface FlexSong : FlexSongBackend
{
    NSDictionary *_analysisData;
    CDStruct_1b6d18a9 _cachedNaturalDuration;
    NSArray *_unloadedMainSegments;
    NSString *_audioFileExtension;
    NSObject<FlexSongAssetProviderProtocol> *_assetProvider;
    NSArray *_mainSegments;
    NSArray *_crossFadeSegments;
    NSArray *_introSegments;
    NSArray *_bodySegments;
    NSArray *_outroSegments;
    NSArray *_transSegments;
}

+ (id)loadSongInFolderWithPath:(id)arg1;
+ (BOOL)_transitionIsPossibleFromSegment:(id)arg1 toSegment:(id)arg2 forBodyClipPlaylist:(id)arg3;
+ (id)outroInfoForClipPlaylist:(id)arg1;
+ (long long)_durationInSamplesToReserveForOutroSegment:(id)arg1 withOptions:(id)arg2;
+ (long long)_findEarlyFadeStartOffsetInSamplesForOutroSegment:(id)arg1 withOptions:(id)arg2;
+ (long long)_findMinLengthInSamplesForEarlyFadeOutForOutroSegment:(id)arg1 withOptions:(id)arg2;
+ (long long)_findMaxLengthInSamplesToReserveForOutroSegment:(id)arg1 withOptions:(id)arg2;
+ (id)numberToString:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *transSegments; // @synthesize transSegments=_transSegments;
@property(readonly, nonatomic) NSArray *outroSegments; // @synthesize outroSegments=_outroSegments;
@property(readonly, nonatomic) NSArray *bodySegments; // @synthesize bodySegments=_bodySegments;
@property(readonly, nonatomic) NSArray *introSegments; // @synthesize introSegments=_introSegments;
@property(readonly, nonatomic) NSArray *crossFadeSegments; // @synthesize crossFadeSegments=_crossFadeSegments;
@property(readonly, nonatomic) NSArray *mainSegments; // @synthesize mainSegments=_mainSegments;
@property(readonly, nonatomic) NSObject<FlexSongAssetProviderProtocol> *assetProvider; // @synthesize assetProvider=_assetProvider;
@property(readonly, nonatomic) NSString *audioFileExtension; // @synthesize audioFileExtension=_audioFileExtension;
- (id)timedMetadataItemsWithIdentifier:(id)arg1 forRendition:(id)arg2;
- (BOOL)verifyAssetsWithFailureReason:(id *)arg1;
- (BOOL)_verifyAssetsForSegment:(id)arg1 withFailureReason:(id *)arg2;
- (BOOL)verifyRendition:(id)arg1 forDuration:(CDStruct_1b6d18a9)arg2 failureReason:(id *)arg3;
- (long long)_samplesForDuration:(CDStruct_1b6d18a9)arg1;
- (BOOL)_validateAuthoringIssuesInRendition:(id)arg1 failureReason:(id *)arg2;
- (BOOL)_validateTransitionsInRendition:(id)arg1 failureReason:(id *)arg2;
- (BOOL)_validateStructureForRendition:(id)arg1 failureReason:(id *)arg2;
- (id)_clipPlaylistForDuration:(CDStruct_1b6d18a9)arg1 withOptions:(id)arg2 testingContext:(id)arg3;
- (id)renditionForDuration:(CDStruct_1b6d18a9)arg1 withOptions:(id)arg2 testingContext:(id)arg3;
- (id)_fullSongLoopedClipPlaylistForDuration:(CDStruct_1b6d18a9)arg1 withOptions:(id)arg2 testingContext:(id)arg3;
- (BOOL)_buildSegmentAssemblyList:(id)arg1 forDuration:(long long)arg2 withOptions:(id)arg3 testingContext:(id)arg4;
- (BOOL)_buildIntroAndOutroOnlySegmentAssemblyList:(id)arg1 forDuration:(long long)arg2 testingContext:(id)arg3;
- (BOOL)_rebuildBodySegmentsInAssemblyList:(id)arg1 forDuration:(long long)arg2 unusedDuration:(long long *)arg3 testingContext:(id)arg4;
- (BOOL)_addOutroSegmentsToAssemblyList:(id)arg1 forDuration:(long long)arg2 allowTrim:(BOOL)arg3 testingContext:(id)arg4;
- (BOOL)_addIntroSegmentsToAssemblyList:(id)arg1 forDuration:(long long)arg2 testingContext:(id)arg3;
- (BOOL)_addBodySegmentsForAssemblyList:(id)arg1 forDuration:(long long)arg2 unusedDuration:(long long *)arg3 testingContext:(id)arg4 timedOut:(char *)arg5;
- (BOOL)_removeUnpermittedTransitionsInAssemblyList:(id)arg1 final:(BOOL)arg2 testingContext:(id)arg3 removedIndexes:(id)arg4 conflictList:(id)arg5;
- (BOOL)_removeUnpermittedTransitionsInAssemblyList:(id)arg1 final:(BOOL)arg2 testingContext:(id)arg3 removedIndexes:(id)arg4;
- (BOOL)_updateTransitionBodySegmentsForAssemblyList:(id)arg1 usingNewSegment:(id)arg2 indexOfNewTransitionSegment:(id)arg3;
- (void)_removeSegmentInfo:(id)arg1 fromAssemblyList:(id)arg2;
- (BOOL)_addSegment:(id)arg1 withDuration:(long long)arg2 toAssemblyList:(id)arg3 timeRemaining:(long long)arg4 reusedSegment:(id *)arg5 indexofNewSegment:(long long *)arg6;
- (BOOL)_addSegment:(id)arg1 withDuration:(long long)arg2 toAssemblyList:(id)arg3 indexOfNewSegment:(long long *)arg4;
- (void)_sequenceBodySegmentList:(id)arg1 forIndexes:(id)arg2;
- (id)_naturalDurationAssemblyList;
- (long long)_minimumPermittedIntroAndOutroDuration;
- (long long)_actualOutroDurationForAssemblyList:(id)arg1 currentDuration:(long long)arg2;
- (long long)_minOutroDuration;
- (long long)_maxOutroDuration;
- (long long)_minIntroDuration;
- (long long)_maxIntroDuration;
- (long long)_minBodySegmentDuration;
- (long long)_sampleDurationOfClipPlaylist:(id)arg1;
- (id)_transitionSegmentForSegmentInfo:(id)arg1 toSegmentInfo:(id)arg2 fromBarIndex:(long long)arg3 inSegmentList:(id)arg4;
- (id)_transitionSegmentForSegmentInfo:(id)arg1 fromBarIndex:(long long)arg2 inSegmentList:(id)arg3;
- (id)_sortFlexSegmentsShortestToLongest:(id)arg1;
- (unsigned long long)_highestIndexForSegmentType:(unsigned long long)arg1;
- (id)_longestSegmentForType:(unsigned long long)arg1;
- (id)_longestSegmentsForType:(unsigned long long)arg1;
- (id)_shortestSegmentForType:(unsigned long long)arg1;
- (id)_shortestSegmentsForType:(unsigned long long)arg1;
- (id)_segmentsForIndex:(unsigned long long)arg1 andType:(unsigned long long)arg2;
- (id)_segmentsforType:(unsigned long long)arg1;
- (void)_loadSegments;
- (id)idealDurations;
- (CDStruct_1b6d18a9)naturalDuration;
- (CDStruct_1b6d18a9)minimumDuration;
- (id)description;
- (id)encodeAsDictionary;
- (void)_cacheSegmentsByType;
- (BOOL)isLoaded;
- (BOOL)canPlay;
- (id)analysisData;
- (void)_loadAnalysisData;
- (void)_setupInitialAssets:(id)arg1;
- (id)initWithDictionary:(id)arg1 assets:(id)arg2;
- (id)initWithUID:(id)arg1 songName:(id)arg2 artistName:(id)arg3 tagIDs:(id)arg4 keywords:(id)arg5 hidden:(BOOL)arg6 sampleRate:(long long)arg7 mainSegments:(id)arg8 crossFadeSegments:(id)arg9 assets:(id)arg10 audioFileExtension:(id)arg11 audioEncoderPresetName:(id)arg12 metadataVersion:(long long)arg13 customOptions:(id)arg14;
- (id)initCommonWithUID:(id)arg1 songName:(id)arg2 artistName:(id)arg3 tagIDs:(id)arg4 keywords:(id)arg5 hidden:(BOOL)arg6 sampleRate:(long long)arg7 mainSegments:(id)arg8 crossFadeSegments:(id)arg9 audioFileExtension:(id)arg10 audioEncoderPresetName:(id)arg11 metadataVersion:(long long)arg12 customOptions:(id)arg13;

@end

