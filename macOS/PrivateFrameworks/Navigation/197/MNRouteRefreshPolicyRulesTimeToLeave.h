//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNRouteRefreshPolicyRules-Protocol.h>

@class NSString;

@interface MNRouteRefreshPolicyRulesTimeToLeave : NSObject <MNRouteRefreshPolicyRules>
{
    unsigned long long _policy;
}

@property(readonly, nonatomic) unsigned long long policy; // @synthesize policy=_policy;
- (double)_timeIntervalToDestination:(id)arg1 fromDate:(id)arg2;
- (double)maxTimeIntervalFromNowForDestinationRefresh:(id)arg1 fromDate:(id)arg2;
- (double)timeIntervalForDestinationRefresh:(id)arg1 lastUpdate:(id)arg2;
@property(readonly, nonatomic) BOOL canWakeDeviceForUpdates;
@property(readonly, nonatomic) BOOL canWakeClientForUpdates;
- (BOOL)canMakeNetworkRequestsForDestination:(id)arg1 atDate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

