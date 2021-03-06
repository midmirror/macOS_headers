//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

#import "NSAnimationDelegate-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"
#import "NSPopoverDelegate-Protocol.h"

@class Controller, NSAnimation, NSArray, NSMenu, NSMenuItem, NSMutableIndexSet, NSString, NSUserDefaults, Torrent, TorrentCell;

@interface TorrentTableView : NSOutlineView <NSOutlineViewDelegate, NSAnimationDelegate, NSPopoverDelegate>
{
    Controller *fController;
    TorrentCell *fTorrentCell;
    NSUserDefaults *fDefaults;
    NSMutableIndexSet *fCollapsedGroups;
    NSMenu *fContextRow;
    NSMenu *fContextNoRow;
    long long fMouseRow;
    long long fMouseControlRow;
    long long fMouseRevealRow;
    long long fMouseActionRow;
    NSArray *fSelectedValues;
    NSMenu *fActionMenu;
    NSMenu *fUploadMenu;
    NSMenu *fDownloadMenu;
    NSMenu *fRatioMenu;
    NSMenu *fPriorityMenu;
    NSMenuItem *fGlobalLimitItem;
    Torrent *fMenuTorrent;
    double fPiecesBarPercent;
    NSAnimation *fPiecesBarAnimation;
    BOOL fActionPopoverShown;
}

- (void)selectAndScrollToRow:(long long)arg1;
- (double)piecesBarPercent;
- (void)animation:(id)arg1 didReachProgressMark:(float)arg2;
- (void)animationDidEnd:(id)arg1;
- (void)togglePiecesBar;
- (void)setPriority:(id)arg1;
- (void)setQuickRatio:(id)arg1;
- (void)setQuickRatioMode:(id)arg1;
- (void)setGlobalLimit:(id)arg1;
- (void)setQuickLimit:(id)arg1;
- (void)setQuickLimitMode:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)displayTorrentActionPopoverForEvent:(id)arg1;
- (void)toggleControlForTorrent:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)paste:(id)arg1;
- (struct CGRect)iconRectForRow:(long long)arg1;
- (void)keyDown:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (id)selectedTorrents;
- (id)selectedValues;
- (void)selectValues:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewSelectionIsChanging:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setActionButtonHover:(long long)arg1;
- (void)setRevealButtonHover:(long long)arg1;
- (void)setControlButtonHover:(long long)arg1;
- (void)setRowHover:(long long)arg1;
- (void)removeTrackingAreas;
- (void)updateTrackingAreas;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (id)outlineView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 item:(id)arg3;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (void)saveCollapsedGroups;
- (void)removeAllCollapsedGroups;
- (void)removeCollapsedGroup:(long long)arg1;
- (BOOL)isGroupCollapsed:(long long)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setGroupStatusColumns;
- (BOOL)pointInGroupStatusRect:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

