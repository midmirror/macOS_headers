//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class ABCardMergeBannerViewController, CNContactCardViewController;

@interface ABCardMergeCardViewController : NSViewController
{
    ABCardMergeBannerViewController *_bannerViewController;
    CNContactCardViewController *_contactCardViewController;
}

@property(readonly) CNContactCardViewController *contactCardViewController; // @synthesize contactCardViewController=_contactCardViewController;
- (void)setStyleProvider:(id)arg1;
- (void)setUpdatedInformation:(id)arg1;
- (void)setUpAlternateImagesForPerson:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)viewDidLoad;
- (id)makeBannerView;
- (id)makeContainerView;
- (void)loadView;
- (void)dealloc;
- (id)initWithBannerViewController:(id)arg1;

@end

