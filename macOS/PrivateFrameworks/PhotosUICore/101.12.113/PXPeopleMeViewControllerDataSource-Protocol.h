//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXPeopleMeViewController;
@protocol PXPerson;

@protocol PXPeopleMeViewControllerDataSource <NSObject>
- (void)userDidAnswerMeViewController:(PXPeopleMeViewController *)arg1 withResponse:(BOOL)arg2 suggestedPerson:(id <PXPerson>)arg3;
- (id <PXPerson>)suggestedPersonForMeViewController:(PXPeopleMeViewController *)arg1;
@end

