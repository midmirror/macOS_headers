//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface KNMacEffectCustomCurveGridView : NSView
{
    BOOL _drawCenterCrosshairs;
    long long _horizonalDivisions;
    long long _verticalDivisions;
}

@property(nonatomic) BOOL drawCenterCrosshairs; // @synthesize drawCenterCrosshairs=_drawCenterCrosshairs;
@property(nonatomic) long long verticalDivisions; // @synthesize verticalDivisions=_verticalDivisions;
@property(nonatomic) long long horizonalDivisions; // @synthesize horizonalDivisions=_horizonalDivisions;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

