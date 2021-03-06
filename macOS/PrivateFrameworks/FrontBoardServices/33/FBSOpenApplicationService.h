//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSServiceConnection, NSObject<OS_dispatch_queue>;

@interface FBSOpenApplicationService : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BSServiceConnection *_connection;
}

+ (id)serviceWithDefaultShellEndpoint;
+ (id)serviceWithEndpoint:(id)arg1;
+ (id)serviceName;
+ (id)new;
- (void).cxx_destruct;
- (void)_openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_remoteTarget;
- (void)openApplication:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)canOpenApplication:(id)arg1 reason:(long long *)arg2;
- (void)openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)_initWithEndpoint:(id)arg1;
- (id)init;

@end

