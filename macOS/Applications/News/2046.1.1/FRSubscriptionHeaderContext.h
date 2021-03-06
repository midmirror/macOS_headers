//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface FRSubscriptionHeaderContext : NSObject
{
    BOOL _hideAlreadySubscribedButton;
    BOOL _hideTopHairline;
    BOOL _sharedStory;
    NSString *_publisherTitle;
    UIColor *_backgroundColor;
    UIColor *_buttonBackgroundColor;
    UIColor *_buttonForegroundColor;
    UIColor *_introTextColor;
    unsigned long long _offsetHeight;
}

@property(nonatomic) unsigned long long offsetHeight; // @synthesize offsetHeight=_offsetHeight;
@property(nonatomic) BOOL sharedStory; // @synthesize sharedStory=_sharedStory;
@property(nonatomic) BOOL hideTopHairline; // @synthesize hideTopHairline=_hideTopHairline;
@property(nonatomic) BOOL hideAlreadySubscribedButton; // @synthesize hideAlreadySubscribedButton=_hideAlreadySubscribedButton;
@property(retain, nonatomic) UIColor *introTextColor; // @synthesize introTextColor=_introTextColor;
@property(retain, nonatomic) UIColor *buttonForegroundColor; // @synthesize buttonForegroundColor=_buttonForegroundColor;
@property(retain, nonatomic) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *publisherTitle; // @synthesize publisherTitle=_publisherTitle;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;

@end

