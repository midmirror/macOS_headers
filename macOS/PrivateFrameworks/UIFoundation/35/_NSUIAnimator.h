//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _NSUIAnimator : NSObject
{
}

+ (void)performWithoutAnimation:(CDUnknownBlockType)arg1;
+ (void)performWithAnimation:(CDUnknownBlockType)arg1;
+ (void)animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
+ (void)animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)animateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (BOOL)areAnimationsEnabled;

@end

