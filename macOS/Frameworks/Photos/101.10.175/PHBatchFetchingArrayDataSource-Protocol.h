//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class NSArray, NSString, PHPhotoLibrary;
@protocol PHBatchFetchingArrayElement;

@protocol PHBatchFetchingArrayDataSource <NSObject>
- (PHPhotoLibrary *)bfa_photoLibrary;
- (id <PHBatchFetchingArrayElement>)bfa_tombstoneObjectForOID:(id)arg1 uuid:(NSString *)arg2 propertyHint:(unsigned long long)arg3;
- (NSArray *)bfa_fetchedObjectsForOIDs:(NSArray *)arg1 objectClass:(Class)arg2;
- (NSArray *)bfa_fetchObjectsForOIDs:(NSArray *)arg1 propertyHint:(unsigned long long)arg2;
@end

