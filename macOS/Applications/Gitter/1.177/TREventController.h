//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FayeClientDelegate-Protocol.h"
#import "TRConnectionMonitorDelegate-Protocol.h"

@class FayeClient, NSString, NSTimer, TRConnectionMonitor;
@protocol TREventControllerDelegate;

@interface TREventController : NSObject <TRConnectionMonitorDelegate, FayeClientDelegate>
{
    BOOL _subscriptionReady;
    int _state;
    id <TREventControllerDelegate> _delegate;
    FayeClient *_faye;
    double _connectWait;
    NSString *_fayeClientId;
    NSString *_userId;
    NSTimer *_connectTimer;
    TRConnectionMonitor *_connectionMonitor;
}

@property(retain) TRConnectionMonitor *connectionMonitor; // @synthesize connectionMonitor=_connectionMonitor;
@property(retain) NSTimer *connectTimer; // @synthesize connectTimer=_connectTimer;
@property(retain) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain) NSString *fayeClientId; // @synthesize fayeClientId=_fayeClientId;
@property(nonatomic) double connectWait; // @synthesize connectWait=_connectWait;
@property(retain, nonatomic) FayeClient *faye; // @synthesize faye=_faye;
@property(retain, nonatomic) id <TREventControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL subscriptionReady; // @synthesize subscriptionReady=_subscriptionReady;
- (void).cxx_destruct;
- (void)fayeClientWillSendMessage:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)fayeClientWillReceiveMessage:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)fayeClientError:(id)arg1;
- (void)subscriptionFailedWithError:(id)arg1;
- (void)didUnsubscribeFromChannel:(id)arg1;
- (void)didSubscribeToChannel:(id)arg1;
- (void)connectionFailed;
- (void)disconnectedFromServer;
- (void)connectedToServer;
- (void)messageReceived:(id)arg1 channel:(id)arg2;
- (void)dealloc;
- (void)disconnect;
- (void)reconnect;
- (void)unsubscribeFromUserChannels;
- (void)subscribeToUserChannels;
- (void)connectionHasFailed:(id)arg1;
- (void)connectNow;
- (void)connectInternal;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

