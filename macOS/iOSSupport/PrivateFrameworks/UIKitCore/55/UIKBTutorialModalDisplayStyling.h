//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface UIKBTutorialModalDisplayStyling : NSObject
{
    NSArray *_backgroundEffects;
    UIColor *_backgroundColor;
    UIColor *_mainTextColor;
    UIColor *_buttonTextColor;
}

@property(retain, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(retain, nonatomic) UIColor *mainTextColor; // @synthesize mainTextColor=_mainTextColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSArray *backgroundEffects; // @synthesize backgroundEffects=_backgroundEffects;
- (void).cxx_destruct;
- (id)backgroundBlurEffects:(long long)arg1;
- (id)initWithKeyboardAppearance:(long long)arg1;

@end

