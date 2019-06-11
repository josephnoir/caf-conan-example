#include <caf/all.hpp>
#include <caf/io/all.hpp>

void caf_main(caf::actor_system& system, const caf::actor_system_config& config) {
  auto a = system.spawn([](caf::event_based_actor* self) -> caf::behavior {
    aout(self) << "hello world" << std::endl;
    return {
      [=](int i) {
        return i + 1;
      }
    };
  });
  system.middleman().publish(a, 23456);
  system.await_all_actors_done();
}

CAF_MAIN(caf::io::middleman)
