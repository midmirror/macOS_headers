//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIImageCGImageContent.h>

@class _UICGImageDecompressor;

__attribute__((visibility("hidden")))
@interface _UIImageAsyncCGImageContent : _UIImageCGImageContent
{
    long long _orientation;
    BOOL _finishedDecompressing;
    _UICGImageDecompressor *_decompressor;
}

@property BOOL finishedDecompressing; // @synthesize finishedDecompressing=_finishedDecompressing;
@property(retain, setter=_setDecompressor:) _UICGImageDecompressor *_decompressor; // @synthesize _decompressor;
- (void).cxx_destruct;
@property(readonly) long long orientation;
- (struct CGImage *)CGImage;
- (BOOL)isDecompressing;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize)arg2 scale:(double)arg3 renderingIntent:(unsigned long long)arg4 cache:(BOOL)arg5;

@end

