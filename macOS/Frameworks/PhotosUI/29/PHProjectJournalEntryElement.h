//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PHProjectElement.h>

#import "NSSecureCoding.h"

@class NSDate, PHProjectAssetElement, PHProjectTextElement;

@interface PHProjectJournalEntryElement : PHProjectElement <NSSecureCoding>
{
    NSDate *_date;
    PHProjectAssetElement *_assetElement;
    PHProjectTextElement *_textElement;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) PHProjectTextElement *textElement; // @synthesize textElement=_textElement;
@property(readonly, nonatomic) PHProjectAssetElement *assetElement; // @synthesize assetElement=_assetElement;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description:(BOOL)arg1;
- (id)initWithDate:(id)arg1 assetElement:(id)arg2 textElement:(id)arg3 weight:(id)arg4 placement:(struct CGRect)arg5;

@end

