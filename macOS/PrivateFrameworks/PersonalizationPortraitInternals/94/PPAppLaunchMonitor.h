//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _PASLock;

@interface PPAppLaunchMonitor : NSObject
{
    _PASLock *_lock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_registerForAppChangesIfNeededWithGuardedData:(id)arg1;
- (void)deregisterForAppLaunchWithToken:(id)arg1;
- (id)registerForAppLaunchWithBundleId:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_init;
- (id)init;

@end

