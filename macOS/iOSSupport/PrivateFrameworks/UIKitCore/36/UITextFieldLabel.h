//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UILabel.h>

__attribute__((visibility("hidden")))
@interface UITextFieldLabel : UILabel
{
    BOOL _shouldRenderWithoutTextField;
}

+ (id)_defaultAttributes;
+ (id)defaultFont;
@property(nonatomic) BOOL shouldRenderWithoutTextField; // @synthesize shouldRenderWithoutTextField=_shouldRenderWithoutTextField;
- (BOOL)_shouldDrawUnderlinesLikeWebKit;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)_defaultDrawTextInRect:(struct CGRect)arg1;

@end

