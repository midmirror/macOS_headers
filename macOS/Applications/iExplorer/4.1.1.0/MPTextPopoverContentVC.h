//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface MPTextPopoverContentVC : NSViewController
{
    NSString *_text;
    NSTextField *_textField;
    struct CGSize _size;
}

@property(nonatomic) __weak NSTextField *textField; // @synthesize textField=_textField;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)initWithText:(id)arg1 size:(struct CGSize)arg2;

@end

