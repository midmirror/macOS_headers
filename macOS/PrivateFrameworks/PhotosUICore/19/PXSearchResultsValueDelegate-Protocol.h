//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PLSearchIndexDateFormatter, PSIDate, PXSearchResultsValue;

@protocol PXSearchResultsValueDelegate <NSObject>
- (NSString *)stringWithStartDate:(PSIDate *)arg1 endDate:(PSIDate *)arg2;
- (PLSearchIndexDateFormatter *)dateFormatter;
- (BOOL)searchIsFinished:(PXSearchResultsValue *)arg1;
@end

