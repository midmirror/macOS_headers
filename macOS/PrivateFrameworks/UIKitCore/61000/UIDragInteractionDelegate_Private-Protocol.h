//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIDragInteractionDelegate-Protocol.h>

@class UIDragInteraction, UIDragItem, UIGestureRecognizer, UIView;
@protocol UIDragSession;

@protocol UIDragInteractionDelegate_Private <UIDragInteractionDelegate>

@optional
- (long long)_dragInteraction:(UIDragInteraction *)arg1 dataOwnerForAddingToSession:(id <UIDragSession>)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (long long)_dragInteraction:(UIDragInteraction *)arg1 dataOwnerForSession:(id <UIDragSession>)arg2;
- (BOOL)_dragInteraction:(UIDragInteraction *)arg1 competingGestureRecognizerShouldDelayLift:(UIGestureRecognizer *)arg2;
- (BOOL)_dragInteraction:(UIDragInteraction *)arg1 canExcludeCompetingGestureRecognizer:(UIGestureRecognizer *)arg2;
- (BOOL)_dragInteraction:(UIDragInteraction *)arg1 shouldDelayCompetingGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(UIDragInteraction *)arg1;
- (void)_dragInteraction:(UIDragInteraction *)arg1 liftAnimationDidChangeDirection:(long long)arg2;
- (BOOL)_dragInteraction:(UIDragInteraction *)arg1 shouldCancelOnAppDeactivationWithDefault:(BOOL)arg2;
- (BOOL)_dragInteractionAllowsDragOverridingMasterSwitch:(UIDragInteraction *)arg1;
- (UIView *)_dragInteraction:(UIDragInteraction *)arg1 viewToSnapshotItem:(UIDragItem *)arg2;
@end

