//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColorSpace, NSImage;

__attribute__((visibility("hidden")))
@interface NSColorPickerWheelView : NSView
{
    BOOL _wheelImageIsValid;
    NSImage *_wheelImage;
    struct CGPoint currentPt;
    BOOL _isTracking;
    id colorPanel;
    id controllingPicker;
    double _brightness;
    NSColorSpace *_preferredDisplayColorSpace;
}

+ (id)preferredColorSpaces;
- (id)menuForEvent:(id)arg1;
- (void)_selectColorSpace:(id)arg1;
- (id)_displayFallbackColorSpace;
@property(readonly, retain) NSColorSpace *effectiveDisplayColorSpace;
@property(retain) NSColorSpace *preferredDisplayColorSpace;
- (void)mouseDown:(id)arg1;
- (BOOL)isTracking;
- (void)_setPointerKeyboardFocusNeedsDisplay;
- (BOOL)mouseDownCanMoveWindow;
- (id)_colorFromPoint:(struct CGPoint)arg1;
- (id)_brightColorFromPoint:(struct CGPoint)arg1 fullBrightness:(BOOL)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)_resizeView;
- (void)viewDidChangeBackingProperties;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)viewSizeChanged:(id)arg1;
- (struct CGPoint)_pointFromColor:(id)arg1;
- (BOOL)_pointInPicker:(struct CGPoint *)arg1;
- (id)_wheelImage;
- (void)_invalidateWheelImage;
- (void)setBrightness:(double)arg1;
- (id)brightColor;
- (id)color;
- (void)setColor:(id)arg1;
- (id)storeColorPanel:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveCurrentPointInDirection:(struct CGPoint)arg1;
- (void)setKeyboardFocusRingNeedsDisplayIfNeededInRect:(struct CGRect)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)_windowChangedKeyState;
- (BOOL)_isShowingKeyboardFocus;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;

@end

