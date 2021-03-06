//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOABAssignmentResponse, GEOPDDatasetABStatus, NSDictionary, NSString;
@protocol GEOExperimentServerProxyDelegate;

@protocol GEOExperimentServerProxy <NSObject>
@property(readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
@property(nonatomic) __weak id <GEOExperimentServerProxyDelegate> delegate;
- (void)_debug_setBucketIdDictionaryRepresentation:(NSDictionary *)arg1;
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:(NSDictionary *)arg1;
- (void)_debug_fetchAllAvailableExperiments:(void (^)(GEOABAssignmentResponse *, NSError *, struct NSDictionary *))arg1;
- (void)_debug_setQuerySubstring:(NSString *)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
- (void)abAssignUUIDWithCompletionHandler:(void (^)(NSString *, NSDate *, NSError *))arg1;
- (void)refreshDatasetABStatus:(GEOPDDatasetABStatus *)arg1;
- (void)forceUpdate;
- (id)initWithDelegate:(id <GEOExperimentServerProxyDelegate>)arg1;
@end

