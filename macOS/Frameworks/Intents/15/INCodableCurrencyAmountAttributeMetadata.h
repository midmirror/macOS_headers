//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INCodableNumberAttributeMetadata.h>

@class NSArray, NSString;

@interface INCodableCurrencyAmountAttributeMetadata : INCodableNumberAttributeMetadata
{
    NSString *_currencyCode;
    NSArray *_currencyCodes;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *currencyCodes; // @synthesize currencyCodes=_currencyCodes;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end

