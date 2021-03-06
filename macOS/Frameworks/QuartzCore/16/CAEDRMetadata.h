//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CAEDRMetadata : NSObject
{
    struct _CAEDRMetadataPrivate *_priv;
}

+ (void)setMetadata:(id)arg1 onSurface:(struct __IOSurface *)arg2;
+ (id)HLGMetadata;
+ (id)HDR10MetadataWithMinLuminance:(float)arg1 maxLuminance:(float)arg2 opticalOutputScale:(float)arg3;
+ (id)HDR10MetadataWithDisplayInfo:(id)arg1 contentInfo:(id)arg2 opticalOutputScale:(float)arg3;
- (id)description;
- (void)dealloc;
- (id)initWithBT2100HLG;
- (id)initWithMasteringDisplayMinNits:(float)arg1 maxNits:(float)arg2 opticalOutputScale:(float)arg3;
- (id)initWithSEIMasteringDisplayData:(id)arg1 contentLightLevelData:(id)arg2 opticalOutputScale:(float)arg3;
- (id)initWithSEIMasteringDisplayData:(id)arg1 contentLightLevelData:(id)arg2;

@end

