//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GEODiskSpaceManager : NSObject
{
    struct dispatch_queue_s *_queue;
    NSMutableDictionary *_freeableClaims;
}

+ (id)sharedManager;
- (unsigned long long)freeDiskSpaceBy:(unsigned long long)arg1;
- (unsigned long long)getFreeableSpace;
- (void)dealloc;
- (id)init;

@end

