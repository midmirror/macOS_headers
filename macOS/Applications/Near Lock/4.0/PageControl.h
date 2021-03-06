//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImageView, NSMutableArray;

@interface PageControl : NSView
{
    int _numberOfDots;
    int _indexSelected;
    int _distanceBetweenDots;
    NSImageView *_activePageIndicator;
    NSMutableArray *_pageIndicatorArray;
}

@property(retain) NSMutableArray *pageIndicatorArray; // @synthesize pageIndicatorArray=_pageIndicatorArray;
@property(retain) NSImageView *activePageIndicator; // @synthesize activePageIndicator=_activePageIndicator;
@property int distanceBetweenDots; // @synthesize distanceBetweenDots=_distanceBetweenDots;
@property int indexSelected; // @synthesize indexSelected=_indexSelected;
@property(nonatomic) int numberOfDots; // @synthesize numberOfDots=_numberOfDots;
- (void).cxx_destruct;
- (id)createPageIndicatorAtIndex:(int)arg1;
- (id)pageIndicatorForIndex:(int)arg1;
- (void)setDotActiveAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)updateView;
- (void)removeAllDots;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initialize;
- (id)initWithCoder:(id)arg1;

@end

