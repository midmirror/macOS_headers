//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "CNContactCardWidget.h"

@class NSButton, NSString;

@interface CNEditAuthorizationViewController : NSViewController <CNContactCardWidget>
{
    BOOL _didSuccessfullyAuthorize;
    id <CNEditAuthorizationViewControllerDelegate> _delegate;
    NSViewController *_pinViewController;
    NSButton *_cancelButton;
    CDUnknownBlockType _authorizationHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType authorizationHandler; // @synthesize authorizationHandler=_authorizationHandler;
@property(readonly, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSViewController *pinViewController; // @synthesize pinViewController=_pinViewController;
@property(nonatomic) BOOL didSuccessfullyAuthorize; // @synthesize didSuccessfullyAuthorize=_didSuccessfullyAuthorize;
@property(nonatomic) __weak id <CNEditAuthorizationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (double)desiredHeight;
- (void)setContact:(id)arg1;
- (void)noteFailedAuthorization;
- (void)noteSuccessfulAuthorization;
- (void)cancelButtonPressed:(id)arg1;
- (void)didNotAuthorize;
- (void)didAuthorize;
- (void)establishAuthorizedState;
- (void)resetAuthorizationState;
- (void)presentEditAuthorizationUI;
- (void)tearDownAuthorizationUI;
- (void)setupAuthorizationUI;
- (void)viewWillAppear;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

