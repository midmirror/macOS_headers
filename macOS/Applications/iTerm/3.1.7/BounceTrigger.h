//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "Trigger.h"

@interface BounceTrigger : Trigger
{
}

+ (id)title;
- (int)defaultIndex;
- (BOOL)performActionWithCapturedStrings:(const id *)arg1 capturedRanges:(const struct _NSRange *)arg2 captureCount:(long long)arg3 inSession:(id)arg4 onString:(id)arg5 atAbsoluteLineNumber:(long long)arg6 stop:(char *)arg7;
- (unsigned long long)bounceType;
- (id)menuItemsForPoupupButton;
- (id)objectAtIndex:(long long)arg1;
- (long long)indexForObject:(id)arg1;
- (BOOL)paramIsPopupButton;
- (BOOL)takesParameter;
- (id)paramPlaceholder;

@end

