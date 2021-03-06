//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BMPatternMiner.h"

@class NSMutableArray;

@interface BMAprioriPatternMiner : NSObject <BMPatternMiner>
{
    NSMutableArray *_indexBaskets;
    NSMutableArray *_items;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSMutableArray *indexBaskets; // @synthesize indexBaskets=_indexBaskets;
- (id)minePatternsWithMinSupport:(unsigned long long)arg1 constrainedToPatternsWithTypes:(id)arg2;
- (id)getItemIndexSetsWithMinSupport:(double)arg1 itemIndexSets:(id)arg2;
- (id)supportOfItemIndexSet:(id)arg1;
- (id)initWithBaskets:(id)arg1;

@end

