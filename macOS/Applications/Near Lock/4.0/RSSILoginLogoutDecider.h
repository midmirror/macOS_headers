//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EventTimestamp, LoginConfirmer;
@protocol RSSILoginLogoutDeciderDelegate;

@interface RSSILoginLogoutDecider : NSObject
{
    id <RSSILoginLogoutDeciderDelegate> _delegate;
    EventTimestamp *_mobileNotifierEvent;
    EventTimestamp *_loginLogoutTriggered;
    LoginConfirmer *_loginConfirmer;
    LoginConfirmer *_logoutConfirmer;
}

@property(retain, nonatomic) LoginConfirmer *logoutConfirmer; // @synthesize logoutConfirmer=_logoutConfirmer;
@property(retain, nonatomic) LoginConfirmer *loginConfirmer; // @synthesize loginConfirmer=_loginConfirmer;
@property(retain, nonatomic) EventTimestamp *loginLogoutTriggered; // @synthesize loginLogoutTriggered=_loginLogoutTriggered;
@property(retain, nonatomic) EventTimestamp *mobileNotifierEvent; // @synthesize mobileNotifierEvent=_mobileNotifierEvent;
@property(nonatomic) __weak id <RSSILoginLogoutDeciderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)shouldExecuteLogoutCommandForMobileDevice:(id)arg1;
- (BOOL)shouldTryToLogoutForMobileDevice:(id)arg1;
- (BOOL)shouldProcessRSSIAfterLeavingNearLockRaduisForDevice:(id)arg1;
- (BOOL)shouldExecuteLoginCommandForMobileDevice:(id)arg1;
- (BOOL)shouldTryToLoginForMobileDevice:(id)arg1;
- (BOOL)shouldProcessRSSIAfterEnteringNearLockRaduisForDevice:(id)arg1;
- (BOOL)shouldAnalyzeRSSIUpdateForMobileDevice:(id)arg1;
- (void)executeLoginCommandForMobileDevice:(id)arg1;
- (void)executeLogoutCommandForMobileDevice:(id)arg1;
- (void)didVerifyEnteringNearLockRadiusForDevice:(id)arg1;
- (void)isInsideOfNearLockRadiusForMobileDevice:(id)arg1;
- (void)didVerifyExitingNearLockRadiusForDevice:(id)arg1;
- (void)isOutsideOfNearLockRadiusForMobileDevice:(id)arg1;
- (void)isInTresholdAreaForMobileDevice:(id)arg1;
- (void)notifyUserAboutRSSIUpdateIfNeededForMobileDevice:(id)arg1;
- (BOOL)shouldFakeRSSIfromMobileDevice:(id)arg1;
- (void)didUpdateRSSI:(id)arg1 fromMobileDevice:(id)arg2;
- (id)init;

@end

