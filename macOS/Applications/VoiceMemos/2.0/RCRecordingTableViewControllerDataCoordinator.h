//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSString, RCSavedRecordingsController;
@protocol RCRecordingTableViewDataCoordinatorDelegate;

@interface RCRecordingTableViewControllerDataCoordinator : NSObject <NSFetchedResultsControllerDelegate>
{
    NSString *_searchString;
    id <RCRecordingTableViewDataCoordinatorDelegate> _delegate;
    RCSavedRecordingsController *_savedRecordingsController;
}

@property(retain, nonatomic) RCSavedRecordingsController *savedRecordingsController; // @synthesize savedRecordingsController=_savedRecordingsController;
@property(nonatomic) __weak id <RCRecordingTableViewDataCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerWillChangeContent:(id)arg1;
- (unsigned long long)indexOfUUID:(id)arg1;
- (unsigned long long)countOfRecentlyDeleted;
- (id)recordingDataArray;
- (id)initWithControllerMode:(long long)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

