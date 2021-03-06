//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>
#import <AVFoundation/NSMutableCopying-Protocol.h>

@class AVVideoCompositionCoreAnimationTool, AVVideoCompositionInternal, NSArray, NSString;

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying>
{
    AVVideoCompositionInternal *_videoComposition;
}

+ (void)initialize;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1;
+ (id)videoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(CDUnknownBlockType)arg2;
+ (id)_mutableVideoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(CDUnknownBlockType)arg2;
- (void)setColorTransferFunction:(id)arg1;
- (void)setColorYCbCrMatrix:(id)arg1;
- (void)setColorPrimaries:(id)arg1;
- (void)_setFrameDurationForFrameRate:(float)arg1 sourceTrackIDForFrameTiming:(int)arg2;
- (BOOL)isValidForAsset:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 validationDelegate:(id)arg3;
- (BOOL)_isValidReturningExceptionReason:(id *)arg1;
- (id)instructionForFigInstruction:(void *)arg1;
- (id)_serializableInstructions;
- (void)setAnimationTool:(id)arg1;
@property(readonly, retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;
- (id)_postProcessingRootLayer;
- (id)_postProcessingVideoLayers;
- (id)_postProcessingVideoLayer;
- (BOOL)_hasPostProcessingLayers;
- (int)_auxiliaryTrackID;
- (id)_auxiliaryTrackLayer;
- (BOOL)_hasLayerAsAuxiliaryTrack;
- (void)setInstructions:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *instructions;
- (void)setRenderScale:(float)arg1;
@property(readonly, nonatomic) float renderScale;
- (void)setRenderSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGSize renderSize;
- (void)setSourceTrackIDForFrameTiming:(int)arg1;
@property(readonly, nonatomic) int sourceTrackIDForFrameTiming;
- (void)setFrameDuration:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 frameDuration;
- (BOOL)_copyFigVideoCompositor:(const void **)arg1 andSession:(id *)arg2 recyclingSession:(id)arg3 forFigRemaker:(BOOL)arg4 error:(id *)arg5;
- (void)setCustomVideoCompositorClass:(Class)arg1;
@property(readonly, nonatomic) Class customVideoCompositorClass;
- (void)setBuiltInCompositorName:(id)arg1;
- (id)builtInCompositorName;
- (void)_bumpChangeSeed;
- (unsigned long long)_changeSeed;
- (void)finalize;
- (void)dealloc;
- (id)_deepCopy;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(readonly, nonatomic) NSString *colorTransferFunction;
@property(readonly, nonatomic) NSString *colorYCbCrMatrix;
@property(readonly, nonatomic) NSString *colorPrimaries;
- (void)videoCompositionOutputColorPropertiesWithCustomCompositor:(id)arg1 formatDescriptions:(id)arg2 colorPrimaries:(id *)arg3 transferFunction:(id *)arg4 yCbCrMatrix:(id *)arg5;

@end

