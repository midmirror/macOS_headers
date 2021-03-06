//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@interface MouseOverButtonCell : NSButtonCell
{
    double _buttonRegularHeight;
    double _titlePadding;
    double _imagePadding;
    struct CGSize _titleOffset;
    struct CGSize _imageOffset;
}

@property(nonatomic) struct CGSize imageOffset; // @synthesize imageOffset=_imageOffset;
@property(nonatomic) double imagePadding; // @synthesize imagePadding=_imagePadding;
@property(nonatomic) struct CGSize titleOffset; // @synthesize titleOffset=_titleOffset;
@property(nonatomic) double titlePadding; // @synthesize titlePadding=_titlePadding;
@property(nonatomic) double buttonRegularHeight; // @synthesize buttonRegularHeight=_buttonRegularHeight;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;

@end

