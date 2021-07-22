//
//  ViewController.m
//  demo
//
//  Created by Cosmo Julis on 7/20/21.
//

#import "ViewController.h"
#include "user_mission_table.hpp"
#include "user_item_table.hpp"

using namespace co;
using namespace user;
using namespace mission_ns;
using namespace item_ns;

mission_table * pmt = mission_table::get_table();
item_table * pit = item_table::get_table();


@interface ViewController ()

@property (assign, nonatomic) bool meet;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    mission m (7);
//    pmt->missions.insert(m);
    
    
//    for (auto & i : pmt->missions) {
//        i.logRequirement();
//    }
}

- (IBAction)requirementButtonDidTap:(id)sender {
    if (self.meet) return;
    for (const auto & m : pmt->missions) {
        if (m.meet()) {
            self.meet = true;
            std::cout << "mission meet\n";
            return;
        }
    }
}

- (IBAction)buttonDidTap:(id)sender {

}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    
    item i (std::rand()%3 + 5);
    pit->items.insert(i);
    
    std::cout << "make item " << i.get_id() << std::endl;
    
    for (auto & m : pmt->missions) {
        if (i.is_related_mission(m)) {
            if (m.meet()) {
                m.update(i);
            } else {
                m.logRequirement();
            }
        }
        m.logRequirement();
    }



}

@end
