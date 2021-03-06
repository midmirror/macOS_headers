//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "TSKDocumentObject-Protocol.h"

@class NSArray, NSString, TSUColor, TSWPShapeInfo, TSWPStorage;

@protocol TSWPFlowInfo <NSObject, TSKDocumentObject>
+ (TSUColor *)strokeColorForUserInterfaceIdentifier:(unsigned long long)arg1;
+ (TSUColor *)fillColorForUserInterfaceIdentifier:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) TSUColor *userInterfaceStrokeColor;
@property(readonly, nonatomic) TSUColor *userInterfaceFillColor;
@property(nonatomic) unsigned long long userInterfaceIdentifier;
@property(retain, nonatomic) NSArray *textboxes;
@property(readonly, nonatomic) TSWPStorage *textStorage;
- (NSString *)displayNameOfMaxLength:(unsigned long long)arg1 usesEllipsis:(BOOL)arg2;
- (unsigned long long)indexOfTextBox:(TSWPShapeInfo *)arg1;
@end

