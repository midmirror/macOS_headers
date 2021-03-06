//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OADProperties.h"

@class NSString, OADHyperlink, OADOrientedBounds;

@interface OADDrawableProperties : OADProperties
{
    OADOrientedBounds *mOrientedBounds;
    OADHyperlink *mClickHyperlink;
    OADHyperlink *mHoverHyperlink;
    NSString *mTitle;
    NSString *mDescription;
    unsigned int mHasAspectRatioLocked:1;
    unsigned int mAspectRatioLocked:1;
    unsigned int mHasWrdInline:1;
    unsigned int mWrdInline:1;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (BOOL)hasAltDescription;
- (void)setAltDescription:(id)arg1;
- (id)altDescription;
- (BOOL)hasAltTitle;
- (void)setAltTitle:(id)arg1;
- (id)altTitle;
- (BOOL)hasWrdInline;
- (void)setWrdInline:(BOOL)arg1;
- (BOOL)isWrdInline;
- (BOOL)hasHoverHyperlink;
- (void)setHoverHyperlink:(id)arg1;
- (id)hoverHyperlink;
- (BOOL)hasClickHyperlink;
- (void)setClickHyperlink:(id)arg1;
- (id)clickHyperlink;
- (BOOL)hasAspectRatioLocked;
- (void)setAspectRatioLocked:(BOOL)arg1;
- (BOOL)isAspectRatioLocked;
- (id)ownOrientedBounds;
- (BOOL)hasOwnOrientedBounds;
- (BOOL)hasOrientedBounds;
- (void)setOrientedBounds:(id)arg1;
- (id)orientedBounds;
- (id)orientedBoundsForCharts;
- (id)initWithDefaults;

@end

