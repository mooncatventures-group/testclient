//
//  PeerLogger.h
//  MultiPeerLogger
//
//  Created by michelle cannon on 5/17/14.
//  Copyright (c) 2014 michelle cannon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>
@protocol connectionStateDelegate <NSObject>
@optional
-(void)peerDidPublishState:(NSString*)state;
@end


@interface PeerLogger : NSObject<MCNearbyServiceAdvertiserDelegate,MCSessionDelegate> {
  BOOL registeredForNotifications;
    BOOL loggingServiceIsAvailable;
    id<connectionStateDelegate> __unsafe_unretained connectionStateDelegate;
}
 @property  (unsafe_unretained) id connectionStateDelegate;
- (id)initWithPeer:(NSString*)peerName;
- (void)sendData:(NSString*)data;
- (bool) connect;
- (void) disconnect;


@end
