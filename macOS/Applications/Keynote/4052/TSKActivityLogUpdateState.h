//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableIndexSet, NSMutableSet, NSString;

@interface TSKActivityLogUpdateState : NSObject
{
    NSArray *_originalArray;
    NSArray *_finalArray;
    NSMutableSet *_reloadObjects;
    NSMutableSet *_reloadWithChildrenObjects;
    NSMutableArray *_localMoves;
    NSMutableArray *_globalMoves;
    NSMutableArray *_knownReplaces;
    NSMutableArray *_globalMoveSentItems;
    NSMutableArray *_globalMoveReceivedItems;
    NSMutableIndexSet *_replaceOldIndexes;
    NSMutableIndexSet *_replaceNewIndexes;
    NSMutableIndexSet *_globalMoveSends;
    NSMutableIndexSet *_globalMoveReceives;
    BOOL _updatesInconsistent;
    unsigned long long _indexDelta;
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long indexDelta; // @synthesize indexDelta=_indexDelta;
@property(readonly, nonatomic) BOOL updatesInconsistent; // @synthesize updatesInconsistent=_updatesInconsistent;
@property(readonly, nonatomic) NSArray *itemsSentToOtherGroups;
@property(readonly, nonatomic) NSArray *finalArray;
@property(readonly, nonatomic) NSArray *originalArray;
- (void)p_calculateReplaceIndexes;
- (void)ignoreGlobalMoveForObject:(id)arg1;
- (void)ignoreRecordedSentGlobalMoveForObject:(id)arg1;
- (void)ignoreRecordedReceivedGlobalMoveForObject:(id)arg1;
- (void)recordLocalMoveForObject:(id)arg1;
- (void)recordReloadForObject:(id)arg1 reloadChildren:(BOOL)arg2;
- (void)recordReplaceForObject:(id)arg1 withObject:(id)arg2;
- (void)endUpdates:(id)arg1;
- (void)beginUpdates:(id)arg1;
@property(readonly, nonatomic) BOOL hasUpdates;
@property(readonly, nonatomic) BOOL recording;
- (void)dealloc;
- (void)p_reset;

@end

