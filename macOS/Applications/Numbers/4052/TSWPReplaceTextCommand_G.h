//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSWPCommandReplaceRange_G.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSArray, NSString;

@interface TSWPReplaceTextCommand_G : GSWPCommandReplaceRange_G <GSSPAutoEncodable>
{
    NSArray *_rangeList;
    NSString *_insertText;
    NSString *_language;
    NSArray *_removedArgsList;
}

- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)p_setRemovedArgsList:(id)arg1;
- (id)p_removedArgsList;
- (unsigned long long)p_replacementLength;
- (id)p_rangeList;
- (void)transformWithOperationTransformer:(id)arg1;
- (id)operations;
- (void)invalidateRange:(struct _NSRange)arg1 onStorage:(id)arg2;
- (void)commit;
- (BOOL)process;
- (BOOL)supportsCollaboration;
@property(retain, nonatomic) NSArray *removedArgsList;
@property(retain, nonatomic) NSString *language;
@property(retain, nonatomic) NSString *insertText;
@property(retain, nonatomic) NSArray *rangeList;
- (void)deallocSOS;
- (void)populateGSSPCmdTextReplaceText:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)loadFromArchive:(const struct ReplaceTextCommand_GArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct ReplaceTextCommand_GArchive *)arg1 archiver:(id)arg2;

@end

