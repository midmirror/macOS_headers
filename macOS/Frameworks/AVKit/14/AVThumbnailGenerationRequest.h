//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetImageGenerator, AVURLAsset, NSArray;

__attribute__((visibility("hidden")))
@interface AVThumbnailGenerationRequest : NSObject
{
    AVURLAsset *_asset;
    double _startTime;
    double _duration;
    NSArray *_thumbnailTimes;
    double _tolerance;
    long long _requestType;
    CDUnknownBlockType _thumbnailHandler;
    AVAssetImageGenerator *_assetImageGenerator;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(retain) AVAssetImageGenerator *assetImageGenerator; // @synthesize assetImageGenerator=_assetImageGenerator;
@property(copy) CDUnknownBlockType thumbnailHandler; // @synthesize thumbnailHandler=_thumbnailHandler;
@property long long requestType; // @synthesize requestType=_requestType;
@property struct CGSize size; // @synthesize size=_size;
@property double tolerance; // @synthesize tolerance=_tolerance;
@property(retain) NSArray *thumbnailTimes; // @synthesize thumbnailTimes=_thumbnailTimes;
@property double duration; // @synthesize duration=_duration;
@property double startTime; // @synthesize startTime=_startTime;
@property(retain) AVURLAsset *asset; // @synthesize asset=_asset;

@end

