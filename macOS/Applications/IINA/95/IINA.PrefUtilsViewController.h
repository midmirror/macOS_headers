//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IINA.PreferenceViewController.h"

@class NSButton, NSString, NSTextField, NSView, NSWindow;

@interface IINA.PrefUtilsViewController : IINA.PreferenceViewController
{
    // Error parsing type: , name: sectionDefaultAppView
    // Error parsing type: , name: sectionClearCacheView
    // Error parsing type: , name: sectionBrowserExtView
    // Error parsing type: , name: setAsDefaultSheet
    // Error parsing type: , name: setAsDefaultVideoCheckBox
    // Error parsing type: , name: setAsDefaultAudioCheckBox
    // Error parsing type: , name: setAsDefaultPlaylistCheckBox
    // Error parsing type: , name: thumbCacheSizeLabel
    // Error parsing type: , name: savedPlaybackProgressClearedLabel
    // Error parsing type: , name: playHistoryClearedLabel
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)extFirefoxBtnAction:(id)arg1;
- (void)extChromeBtnAction:(id)arg1;
- (void)clearCacheBtnAction:(id)arg1;
- (void)clearHistoryBtnAction:(id)arg1;
- (void)clearWatchLaterBtnAction:(id)arg1;
- (void)setAsDefaultCancelBtnAction:(id)arg1;
- (void)setAsDefaultOKBtnAction:(id)arg1;
- (void)setIINAAsDefaultAction:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSTextField *playHistoryClearedLabel; // @synthesize playHistoryClearedLabel;
@property(nonatomic) __weak NSTextField *savedPlaybackProgressClearedLabel; // @synthesize savedPlaybackProgressClearedLabel;
@property(nonatomic) __weak NSTextField *thumbCacheSizeLabel; // @synthesize thumbCacheSizeLabel;
@property(nonatomic) __weak NSButton *setAsDefaultPlaylistCheckBox; // @synthesize setAsDefaultPlaylistCheckBox;
@property(nonatomic) __weak NSButton *setAsDefaultAudioCheckBox; // @synthesize setAsDefaultAudioCheckBox;
@property(nonatomic) __weak NSButton *setAsDefaultVideoCheckBox; // @synthesize setAsDefaultVideoCheckBox;
@property(nonatomic, retain) NSWindow *setAsDefaultSheet; // @synthesize setAsDefaultSheet;
@property(nonatomic, retain) NSView *sectionBrowserExtView; // @synthesize sectionBrowserExtView;
@property(nonatomic, retain) NSView *sectionClearCacheView; // @synthesize sectionClearCacheView;
@property(nonatomic, retain) NSView *sectionDefaultAppView; // @synthesize sectionDefaultAppView;
@property(nonatomic, readonly) NSString *nibName;

@end

