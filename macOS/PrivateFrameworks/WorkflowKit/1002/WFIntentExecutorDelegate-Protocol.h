//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class INInteraction, WFIntentExecutor;

@protocol WFIntentExecutorDelegate <NSObject>

@optional
- (void)intentExecutor:(WFIntentExecutor *)arg1 showConfirmationForInteraction:(INInteraction *)arg2 confirmationRequired:(BOOL)arg3 authenticationRequired:(BOOL)arg4 completionHandler:(void (^)(BOOL, NSError *))arg5;
- (void)intentExecutorRequestsContinueInApp:(WFIntentExecutor *)arg1;
@end

