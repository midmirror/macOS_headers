//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTCommandRowColumnRange.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSDCommandInducedForPropagation-Protocol.h"

@class NSArray, NSMutableArray;

@interface TSTCommandResizeColumnOrRow : TSTCommandRowColumnRange <GSSPAutoEncodable, TSDCommandInducedForPropagation>
{
    NSMutableArray *_sizesForUndo;
    NSArray *_sizeList;
}

@property(retain, nonatomic) NSArray *sizeList; // @synthesize sizeList=_sizeList;
@property(retain, nonatomic) NSMutableArray *sizesForUndo; // @synthesize sizesForUndo=_sizesForUndo;
@property(readonly, nonatomic) NSArray *objectsBeingModified;
- (id)p_makeChangeDescriptor;
- (BOOL)isValidForCommit;
- (void)rollback;
- (id)makeInverse;
- (BOOL)supportsCollaboration;
- (void)redoWork;
- (void)undoWork;
- (void)commitWork;
- (void)p_doWork;
- (id)actionString;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)dealloc;
- (id)initWithTableInfo:(id)arg1 uidArray:(const vector_dadc1b26 *)arg2 isRow:(BOOL)arg3 sizeList:(id)arg4;
- (id)initWithTableInfo:(id)arg1 rowOrColumn:(long long)arg2 toSize:(double)arg3;
- (id)initWithTableInfo:(id)arg1 rowOrColumn:(long long)arg2 atIndex:(unsigned short)arg3 toSize:(double)arg4;
- (id)initWithTableInfo:(id)arg1 rowOrColumn:(long long)arg2 atIndex:(unsigned short)arg3 count:(unsigned short)arg4 toSize:(double)arg5;
- (void)populateGSSPCmdTableSetHeaderSize:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, nonatomic) NSArray *otherSerializationClasses;

@end

