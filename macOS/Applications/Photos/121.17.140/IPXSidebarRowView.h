//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSTrackingArea;

__attribute__((visibility("hidden")))
@interface IPXSidebarRowView : NSTableRowView
{
    NSTrackingArea *_trackingArea;
}

+ (id)rowViewWithIdentifier:(id)arg1;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
@property(nonatomic) BOOL tracksCursor;

@end

