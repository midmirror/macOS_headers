//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSUUID, _CDContextualChangeRegistration;

@protocol _CDRemoteUserContextServer
- (void)fetchPropertiesOfRemoteKeyPaths:(NSArray *)arg1 handler:(void (^)(NSError *))arg2;
- (void)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(unsigned long long)arg1 handler:(void (^)(NSError *))arg2;
- (void)unsubscribeFromContextValueChangeNotificationsWithRegistration:(_CDContextualChangeRegistration *)arg1 deviceIDs:(NSArray *)arg2 handler:(void (^)(NSError *))arg3;
- (void)subscribeToContextValueChangeNotificationsWithRegistration:(_CDContextualChangeRegistration *)arg1 deviceIDs:(NSArray *)arg2 handler:(void (^)(NSError *))arg3;
- (NSUUID *)sourceDeviceUUID;
@end

