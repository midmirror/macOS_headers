//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNObservable, NSArray;

@protocol CNUIIDSAvailabilityProvider <NSObject>
- (CNObservable *)validateHandlesForIMessage:(NSArray *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
- (CNObservable *)validateHandlesForFaceTime:(NSArray *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
@end

