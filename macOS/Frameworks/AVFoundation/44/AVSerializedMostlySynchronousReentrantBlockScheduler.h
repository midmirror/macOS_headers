//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVBlockScheduler.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVSerializedMostlySynchronousReentrantBlockScheduler : NSObject <AVBlockScheduler>
{
    struct OpaqueFigSimpleMutex *_ivarAccessLock;
    NSArray *_blocks;
    struct OpaqueFigReentrantMutex *_blockSerializationLock;
}

+ (void)initialize;
- (void)scheduleBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

