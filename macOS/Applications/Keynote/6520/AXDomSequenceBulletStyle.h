//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AXDomBulletStyle.h"

#import "AXSequenceBulletStyle.h"

@interface AXDomSequenceBulletStyle : AXDomBulletStyle <AXSequenceBulletStyle>
{
}

+ (void)initialize;
- (void)validateSelf;
- (void)axSetFormatString:(id)arg1;
- (BOOL)_isValidFormatString:(id)arg1;
- (id)axGetFormatString;
- (void)axSetSequenceType:(int)arg1;
- (int)axGetSequenceType;

@end

