//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKitUI/UIActionSheetDelegate-Protocol.h>

@class NSString, UIAlertController;

@interface EKUISendInviteAlertController : NSObject <UIActionSheetDelegate>
{
    CDUnknownBlockType _completionHandler;
    UIAlertController *_alertController;
    EKUISendInviteAlertController *_strongSelf;
}

+ (id)presentInviteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)newAlertControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain) EKUISendInviteAlertController *strongSelf; // @synthesize strongSelf=_strongSelf;
@property(retain) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completeWithSelection:(int)arg1;
- (void)cancelAnimated:(BOOL)arg1;
- (void)_presentAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2;
- (BOOL)_useSheetForViewController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

