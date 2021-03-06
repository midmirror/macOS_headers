//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrollView.h"

@class CABasicAnimation, CALayer;

__attribute__((visibility("hidden")))
@interface LPAutoBorderScrollView : NSScrollView
{
    CALayer *_topBorderLayer;
    BOOL _topBorderIsShowing;
    CABasicAnimation *_fadeInAnimation;
    CABasicAnimation *_fadeOutAnimation;
    double _topBorderThreshold;
}

@property(nonatomic) double topBorderThreshold; // @synthesize topBorderThreshold=_topBorderThreshold;
- (void)setBorderColor:(struct CGColor *)arg1;
- (void)setup;
- (void)cvBoundsChanged:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

